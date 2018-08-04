int testcases;
int numOfSongs;
int inputlist[20];
int position =0;
int outputlist[20];

//cout<<"enter the number of testcases"<<endl;
   cin>>testcases;
for(int i =0;i<testcases;i++)
{
//cout<<"enter the number of songs"<<endl;
cin>>numOfSongs;
   for (int j=0;j<numOfSongs;j++)
   {
      //cout <<"enter the song's duration"<<endl;
      cin>>inputlist[j];
   }
   //cout<<"enter the position at which your song is "<<endl;
   cin>>position;
   outputlist[i]=inputlist[position-1];
}
for (int i=0;i<testcases;i++)
{
 cout<<outputlist[i]<<endl;
}

}
