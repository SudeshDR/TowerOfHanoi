//TowerOfHanoi
#include<iostream.h>
#include<conio.h>
void tower(int n,char source, char auxiliary, char destination){
    if(n==1){
	cout<<"Move disk 1 from"<<source<<"to"<<destination<<endl;
	return;
    }
    tower(n-1,source,destination,auxiliary);
    cout<<"Move disk"<<n<<"from"<<source<<"to"<<destination<<endl;
    tower(n-1,auxiliary,source,destination);
}
void main(){
    int numdisks;
    cout<<"Enter the number of Disks:";
    cin>>numdisks;
    tower(numdisks,'A','B','C');
    getch();
}