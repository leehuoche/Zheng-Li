


/*
.����
����һ���� '1'��½�أ��� '0'��ˮ����ɵĵĶ�ά���񣬼��㵺���������
һ������ˮ��Χ����������ͨ��ˮƽ�����ֱ���������ڵ�½�����Ӷ��ɵġ�����Լ���������ĸ��߾���ˮ��Χ��

����:
11110
11010
11000
00000

���: 1	

����:
11000
11000
00100
00011

���: 3
*/


int ans = 0;


void getOneIsland(char** grid, int x, int y,int start_x,int start_y) {
	int i = 0;
	int j = 0;
	for (i = start_x; i < x; ) {
		for (j = start_y; j < y; ) {
			if (grid[i][j] == 1 && grid[i][j + 1] == 1) {
				j++;
			}
			else if (grid[i][j] == 1 && grid[i + 1][j] == 1) {
				i++;
			}
			else if (grid[i][j] == 1 && grid[i - 1][j] == 1) {
				i--;
			}
			else if (grid[i][j] == 1 && grid[i][j - 1] == 1) {
				j--;
			}
			grid[i][j] = -1;
		}
	}

}


int numIslands(char** grid, int x, int y){
	
	int i = 0; 
	int j = 0;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			if (grid[i][j]==1) {
				getOneIsland(grid, x, y,i,j);
				ans++;
			}
		}
	}
	return ans;
}





