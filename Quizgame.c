
#include <stdio.h>
#include <stdlib.h>

int main() {

int n,n1,n2,n3,n4,n5,n6,n7,n8,n9,w=0,c=0,f,f1,ans;
char name[50];

float marks=0.00,total;
printf("                                     ****************             *******           *******        *******       ****************                   \n");
printf("                                    ******************             *****             *****          *****        ****************                   \n");
printf("                                    ***              ***             ***              ***            ***                     ***                   \n");
printf("                                    ***              ***             ***              ***            ***                    ***                     \n");
printf("                                    ***              ***             ***              ***            ***                  ***                       \n");
printf("                                    ***              ***             ***              ***            ***                ***                         \n");
printf("                                    ***              ***             ***              ***            ***               ***                          \n");
printf("                                    ***              ***             ***              ***            ***             ***                            \n");
printf("                                    ***              ***             ***              ***            ***           ***                              \n");
printf("                                     **************  *****            ******************            *****        ****************                   \n");
printf("                                      **********************           ****************            *******       ****************                   \n");
printf("\n\n\n");




printf("                             ****************            ****************              ****            ****         ****************\n");
printf("                            ******************           ******************            *** **        ** ***         ****************\n");
printf("                            ****           ****         ***              ***           ***  **     **   ***         ***\n");
printf("                            ***                         ***              ***           ***    ** **     ***         ***\n");
printf("                            ***                         ********************           ***      *       ***         ***************\n");
printf("                            ***                         ********************           ***              ***         ***************\n");
printf("                            ***          ******         ***              ***           ***              ***         ***\n");
printf("                            ***          ******         ***              ***           ***              ***         ***\n");
printf("                            ****            ***         ***              ***           ***              ***         ***\n");
printf("                            *******************        *****            *****         *****            *****        ****************\n");
printf("                            *******************       *******          *******       *******          *******       ****************\n");

printf("\n\n                       *********Welcome to 1st round***********\n\n\n");

    printf("\n\n********Let's Start**********\n\n");
    printf("\n\nWRITE YOUR NAME\nNAME:");
    gets(name);
    printf("\nName: %s\n",name);

for(int i=1;i<3;){

        printf("\n\npress 1 to next question\n press 2 to quit\n\nPress Here:");

        scanf("%d",&n);

        if(n==1)

        {

                printf("\n\nQuestion-1.Present Secretary General of the U.N belongs to\n1.Nigeria\n2.USA\n3.Ghana\n4.Vietnam\nAns:");

                scanf("%d",&ans);

                if(ans==3)

                    {

                        printf("\n\nCorrect\n");

                        c++;

                        marks=marks+1;

                    }

                else if(ans==1||ans==2||ans==4)

                 {

                    printf("\n\nWrong\n");

                    w++;

                    marks=marks-0.5;

                    }

                else

                 {

                    printf("\n\ninvalid\n");

                    continue;

                 }



         }

         else if(n==2)

        {

            printf("\n\nGAME OVER\n");

            exit(0);

        }

        else

        {

             printf("\n\ninvalid choice.please select the right option\n");

              continue;

        }

    for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&n1);

          if(n1==1)

          {

            printf("\n\nQuestion-2.Leader of Taliban Government in Afghanistan was,\n1.Osama Bin Laden\n2.Mullah Umar\n3.Sheikh Nazif\n4.Umar Rezoan\nAns:");

            scanf("%d",&ans);

            if(ans==2)

              {

                printf("\n\nCorrect\n");

                c++;

                marks=marks+1;

              }

            else if(ans==1||ans==3||ans==4)

             {

               printf("\n\nWrong\n");

               w++;

               marks=marks-0.5;

              }

            else

             {

               printf("\n\nINVALID CHOICE\n");

               continue;



             }

          }

           else if(n1==2)

           {

            printf("\n\nGAME OVER\n");

            exit(0);

           }

           else

           {

                printf("\n\ninvalid choice.please select the right option\n");

              continue;

           }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&n2);

          if(n2==1)

          {

            printf("\n\nQuestion-3.Patrice Lumamba was the Prime Minister of\n1.China\n2.Russia\n3.Congo\n4.Botswana\nAns:");

            scanf("%d",&ans);

           if(ans==3)

            {

                printf("\n\nCorrect\n");

                c++;

                marks=marks+1;

            }

           else if(ans==1||ans==2||ans==4)

           {

             printf("\n\nWrong\n");

             w++;

             marks=marks-0.5;

            }

           else

           {

             printf("\n\nINVALID CHOICE\n");

             continue;

           }

          }

          else if(n2==2)

          {

              printf("\n\nGAME OVER\n");

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&n3);

          if(n3==1)

          {

             printf("\n\nQuestion-4.Who was the first Prime Minister of Pakistan?\n1.Zulfiqure Ali Vutto\n2.Liaquat Ali khan\n3.Zafr Ali\n4.Sheikh Mujibur Rahman\nAns: ");

             scanf("%d",&ans);

             if(ans==2)

             {

                printf("\n\nCorrect\n");

                c++;

                marks=marks+1;

             }

          else if(ans==1||ans==3||ans==4 )

           {

              printf("\n\nWrong\n");

              w++;

              marks=marks-0.5;

            }

            else

            {

                 printf("\n\nINVALID CHOICE\n");

             continue;

            }

          }

          else if(n3==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\npress 2 to quit\nPress Here:");

          scanf("%d",&n4);

          if(n4==1)

          {

             printf("\n\nQuestion-5.Non permanent member of the security council are\n1.7\n2.2\n3.9\n4.10\nAns: ");

            scanf("%d",&ans);

            if(ans==4)

              {

                printf("\n\nCorrect\n");

                c++;

                marks=marks+1;

               }

            else if(ans==1||ans==2||ans==3)

             {

                printf("\n\nWrong\n");

                w++;

                marks=marks-0.5;

             }

           else

             {

                printf("\n\nINVALID CHOICE\n");

                continue;

            }

          }

          else if(n4==2)

          {

               printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&n5);

          if(n5==1)

          {

             printf("\n\nQuestion-6.The idea of SAARC originated in the mind of,\n1.Uhang Cheng\n2.Sheikh mujib\n3.Ziaur Rahman\n4.Indira Gandhi\nAns:");

             scanf("%d",&ans);

             if(ans==3)

              {

                 printf("\n\nCorrect\n");

                  c++;

                 marks=marks+1;

               }

             else if(ans==1||ans==2||ans==4)

              {

                  printf("\n\nWrong\n");

                  w++;

                  marks=marks-0.5;

              }

              else

              {

                   printf("\n\nINVALID CHOICE\n");

                continue;

              }

              }

          else if(n5==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&n6);

          if(n6==1)

          {

             printf("\n\nQuestion-7.Pakistan left Commonwealth in 1972 and rejoined in \n1.1975\n2.1999\n3.2004\n4.1989\nAns:");

             scanf("%d",&ans);

            if(ans==4)

               {

                  printf("\n\nCorrect\n");

                   c++;

                  marks=marks+1;

               }

            else if(ans==1||ans==2||ans==3)

              {

                printf("\n\nWrong\n");

                w++;

                marks=marks-0.5;

              }

              else

              {

                printf("\n\nINVALID CHOICE\n");

                continue;

              }

          }

          else if (n6==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit");

          scanf("%d",&n7);

          if(n7==1)

          {

             printf("\n\nQuestion-8.The author of 'Politics among Nations' is\n1.Mogenthu\n2.Yuhan\n3.Karlin\n4.Jeblin\nAns:");

             scanf("%d",&ans);

            if(ans==1)

             {

               printf("\n\nCorrect\n");

               c++;

               marks=marks+1;

             }



           else if(ans==4||ans==2||ans==3)

             {

               printf("\n\nWrong\n");

               w++;

              marks=marks-0.5;

             }

           else

           {

                printf("\n\nINVALID CHOICE\n");

                continue;

           }

          }

          else if(n7==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

             printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&n8);

          if(n8==1)

          {

              printf("\n\nQuestion-9.Turkey falls in \n1.Europe\n2.Asia\n3.Asia and Europe\n4.America\nAns:");

              scanf("%d",&ans);

              if(ans==3)

              {

                printf("\n\nCorrect\n");

                c++;

                marks=marks+1;

              }

              else if(ans==1||ans==2||ans==4)

              {

                 printf("\n\nWrong\n");

                 w++;

                 marks=marks-0.5;

              }
              else
              {
                  printf("\n\nINVALID CHOICE\n");
                continue;
              }

          }

          else if(n8==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

              printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&n9);

          if(n9==1)

          {

              printf("\n\nQuestion-10.MI-5 is the secret agency of,\n1.USA\n2.Russia\n3.North korea\n4.Uk\nAns:");

              scanf("%d",&ans);

              if(ans==4)

               {

                 printf("\n\nCorrect\n");

                 c++;

                 marks=marks+1;



               }

             else if(ans==1||ans==2||ans==3)

               {

                 printf("\n\nWrong");

                 w++;

                 marks=marks-0.5;

               }

               else

               {

                   printf("\n\ninvalid choice.please select the given option\n");

                   continue;

               }

          }

          else if(n9==2)

          {

              printf("\n\ngame over\n");

          }

          else

          {

              printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

            printf("\n\nWrong : %d \n Correct :%d\n total marks :%.1f",w,c,marks);

            printf("\n");

if(c==5||c>5)

  {

    if(c==5)

    {

      printf("\n\n    GOOD   \n");

    }

    if(c==6)

    {

      printf("\n\n    VERY GOOD   \n");

    }

    if(c==7||c>7)

    {

    printf("\n\n   OUTSANDING   \n");

    }

    printf("\n\nCONGRATULATION!! YOU ARE QUALIFIED FOR THE NEXT LEVEL   \n");

  }

else

{

    printf("\n\nSORRY.YOU ARE NOT QUALIFIED FOR THE NEXT LEVEL");

    exit(0);

}

 for(int i=1;i<3;)

        {

           printf("\n\nPress 1 To Next Level\n Press 2 To Quit\nPress Here:");


            scanf("%d",&f);

            if(f==1) //SECOND ROUND.................................................................................................

                { int m,m1,m2,m3,m4,m5,m6,m7,m8,m9,w1=0,c1=0,ans,f;

float marks1=0.00,score1=0;

printf("Welcome to 2nd round\n");

    printf("\n\n********Let's Start**********\n");

for(int i=1;i<3;)

    {

        printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


        scanf("%d",&m);

        if(m==1)

        {

                printf("\n\nQuestion-1.Which of the following is a non metal that remains liquid at room temperature?\n 1.Oxygen\n2.Hydrogen sulphide\n3.Carbon dioxide\n4.Nitrogen\nAns:");

                scanf("%d",&ans);

                if(ans==2)

                    {

                        printf("\n\nCorrect\n");

                        c1++;

                        marks1=marks1+1;

                    }

                else if(ans==1||ans==3||ans==4)

                 {

                    printf("\n\nWrong\n");

                    w1++;

                    marks1=marks1-0.5;

                    }

                else

                 {

                    printf("\n\ninvalid\n");

                    continue;

                 }

         }

         else if(m==2)

        {

            printf("\n\nGAME OVER\n");

            exit(0);

        }

        else

        {

             printf("\n\ninvalid choice.please select the right option\n");

              continue;

        }

    for(int i=1;i<3;)

        {

         printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&m1);

          if(m1==1)

          {

            printf("\n\nQuestion-2.In which decade was the American Institute of Electrical Engineers (AIEE) founded?\n1.1850\n2.1880\n3.1950\n4.1980\nAns:");

            scanf("%d",&ans);

            if(ans==2)

              {

                printf("\n\nCorrect\n");

                c1++;

                marks1=marks1+1;

              }

            else if(ans==1||ans==3||ans==4)

             {

               printf("\n\nWrong\n");

               w1++;

               marks1=marks1-0.5;

              }

            else

             {

               printf("\n\nINVALID CHOICE\n");

               continue;

             }

          }

           else if(m1==2)

           {

            printf("\n\nGAME OVER\n");

            exit(0);

           }

           else

           {

                printf("\n\ninvalid choice.please select the right option\n");

              continue;

           }

for(int i=1;i<3;)

        {

printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&m2);

          if(m2==1)

          {

            printf("\n\nQuestion-3.What is part of a database that holds only one type of information?\n1.Report\n2.Record\n3.Field\n4.File\nAns:");

            scanf("%d",&ans);

           if(ans==3)

            {

                printf("\n\nCorrect\n");

                c1++;

                marks1=marks1+1;

            }

           else if(ans==1||ans==2||ans==4)

           {

             printf("\n\nWrong\n");

             w1++;

             marks1=marks1-0.5;

            }

           else

           {

             printf("\n\nINVALID CHOICE\n");

             continue;

           }

          }

          else if(m2==2)

          {

              printf("\n\nGAME OVER\n");

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&m3);

          if(m3==1)

          {

             printf("\n\nQuestion-4.'OS' computer abbreviation usually means ?\n1.Order of Significance\n2.Open Software\n3.Operating System\n4.Optical Sensor\nAns: ");

             scanf("%d",&ans);

             if(ans==3)

             {

                printf("\n\nCorrect\n");

                c1++;

                marks1=marks1+1;

             }

          else if(ans==1||ans==2||ans==4 )

           {

              printf("\n\nWrong\n");

              w1++;

              marks1=marks1-0.5;

            }

            else

            {

                 printf("\n\nINVALID CHOICE\n");

             continue;

            }

          }

          else if(m3==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&m4);

          if(m4==1)

          {

             printf("\n\nQuestion-5.In which decade with the first transatlantic radio broadcast occur?\n1.1860\n2.1870\n3.1880\n4.1900\nAns: ");

            scanf("%d",&ans);

            if(ans==4)

              {

                printf("\n\nCorrect\n");

                c1++;

                marks1=marks1+1;

               }

            else if(ans==1||ans==2||ans==3)

             {

                printf("\n\nWrong\n");

                w1++;

                marks1=marks1-0.5;

             }

           else

             {

                printf("\n\nINVALID CHOICE\n");

                continue;

            }

          }

          else if(m4==2)

          {

               printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&m5);

          if(m5==1)

          {

             printf("\n\nQuestion-6.'.MOV' extension refers usually to what kind of file?\n1.Audio file\n2.Image file\n3.Animation/movie file\n4.MS Office document\nAns:");

             scanf("%d",&ans);

             if(ans==3)

              {

                 printf("\n\nCorrect\n");

                  c1++;

                 marks1=marks1+1;

               }

             else if(ans==1||ans==2||ans==4)

              {

                  printf("\n\nWrong\n");

                  w1++;

                  marks1=marks1-0.5;

              }

              else

              {

                   printf("\n\nINVALID CHOICE\n");

                continue;

              }

              }

          else if(m5==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&m6);

          if(m6==1)

          {

             printf("\n\nQuestion-7.Most modern TV's draw power even if turned off. The circuit the power is used in does what function? \n1.High voltage\n2.Color balance\n3.Sound\n4.Remote control\nAns:");

             scanf("%d",&ans);

            if(ans==4)

               {

                  printf("\n\nCorrect\n");

                   c1++;

                  marks1=marks1+1;

               }

            else if(ans==1||ans==2||ans==3)

              {

                printf("\n\nWrong\n");

                w1++;

                marks1=marks1-0.5;

              }

              else

              {

                printf("\n\nINVALID CHOICE\n");

                continue;

              }

          }

          else if (m6==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&m7);

          if(m7==1)

          {

             printf("\n\nQuestion-8.Which is a type of Electrically-Erasable Programmable Read-Only Memory?\n1.Flash\n2.Flange\n3.Fury\n4.FRAM\nAns:");

             scanf("%d",&ans);

            if(ans==1)

             {

               printf("\n\nCorrect\n");

               c1++;

               marks1=marks1+1;

             }



           else if(ans==4||ans==2||ans==3)

             {

               printf("\n\nWrong\n");

               w1++;

              marks1=marks1-0.5;

             }

           else

           {

                printf("\n\nINVALID CHOICE\n");

                continue;

           }

          }

          else if(m7==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

             printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&m8);

          if(m8==1)

          {

              printf("\n\nQuestion-9.The purpose of choke in tube light is ? \n1.To decrease the current\n2.To increase the current\n3.To increase the voltage momentarily\n4.To decrease the voltage momentarily\nAns:");

              scanf("%d",&ans);

              if(ans==3)

              {

                printf("\n\nCorrect\n");

                c1++;

                marks1=marks1+1;

              }

              else if(ans==1||ans==2||ans==4)

              {

                 printf("\n\nWrong\n");

                 w1++;

                 marks1=marks1-0.5;

              }

              else

              {

                printf("INVALID CHOICE\n");

                continue;

              }

          }

          else if(m8==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

              printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&m9);

          if(m9==1)

          {

              printf("\n\nQuestion-10.What does VVVF stand for?\n1.Very Very Vicious Frequency\n2.Variable Velocity Variable Fun\n3.Variant Voltage Vile Frequency\n4.Variable Voltage Variable Frequency\nAns:");

              scanf("%d",&ans);

              if(ans==4)

               {

                 printf("\n\nCorrect\n");

                 c1++;

                 marks1=marks1+1;



               }

             else if(ans==1||ans==2||ans==3)

               {

                 printf("\n\nWrong");

                 w1++;

                 marks1=marks1-0.5;

               }

               else

               {

                   printf("\n\ninvalid choice.please select the given option\n");

                   continue;

               }

          }

          else if(m9==2)

          {

              printf("\n\ngame over\n");

          }

          else

          {

              printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

printf("\n* Wrong = %d \n * Correct = %d\n * Total marks = %.1f\n",w1,c1,marks1);

printf("\n");

if(c1==7||c1>7)

  {

    if(c1==7)

    {

      printf("\n\n    GOOD   \n");

    }

    if(c1==8)

    {

      printf("\n\n    VERY GOOD   \n");

    }

    if(c1==9||c1==10)

    {

    printf("\n\n   OUTSANDING   \n");

    }

    printf("\n\nCONGRATULATION!! YOU ARE QUALIFIED FOR THE NEXT LEVEL   \n");

  }

else

{

    printf("\n\nSORRY.YOU ARE NOT QUALIFIED FOR THE NEXT LEVEL");
    exit(0);

}

for(int i=1;i<3;)

        {

            printf("\n\nPress 1 To Next Level\n Press 2 To Quit\nPress Here:");

            scanf("%d",&f1);

            if(f1==1) //THIRD ROUND.................................................................................................

                {

             int p,p1,p2,p3,p4,p5,p6,p7,p8,p9,w2=0,c2=0,ans;

             float marks2=0.00,score2=0;

             printf("\n\nWelcome to 3rd round\n");

             printf("********Let's Start**********\n");

             for(int i=1;i<3;){

             printf("\n\npress 1 to continue\n press 2 to quit\nPress Here:");

             scanf("%d",&p);

              if(p==1)

               {

                printf("\n\nQuestion-1.Grand Central Terminal, Park Avenue, New York is the world's\n 1.longest railway station\n2.largest railway station\n3.highest railway station\n4.None of the above\nAns:");

                scanf("%d",&ans);

                if(ans==2)

                    {

                        printf("\n\nCorrect\n");

                        c2++;

                        marks2=marks2+1;

                    }

                else if(ans==1||ans==3||ans==4)

                 {

                    printf("\n\nWrong\n");

                    w2++;

                    marks2=marks2-0.5;

                    }

                else

                 {

                    printf("\n\ninvalid\n");

                    continue;

                 }

         }

         else if(p==2)

        {

            printf("\n\nGAME OVER\n");

            exit(0);

        }

        else

        {

             printf("\n\ninvalid choice.please select the right option\n");

              continue;

        }

    for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&p1);

          if(p1==1)

          {

            printf("\n\nQuestion-2.Eritrea, which became the 182nd member of the UN in 1993, is in the continent of?\n1.Asia\n2.Africa\n3.Europe\n4.Australia\nAns:");

            scanf("%d",&ans);

            if(ans==2)

              {

                printf("\n\nCorrect\n");

                c2++;

                marks2=marks2+1;

              }

            else if(ans==1||ans==3||ans==4)

             {

               printf("\n\nWrong\n");

               w2++;

               marks2=marks2-0.5;

              }

            else

             {

               printf("\n\nINVALID CHOICE\n");

               continue;

             }

          }

           else if(p1==2)

           {

            printf("\n\nGAME OVER\n");

            exit(0);

           }

           else

           {

                printf("\n\ninvalid choice.please select the right option\n");

              continue;

           }

for(int i=1;i<3;)

        {

printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&p2);

          if(p2==1)

          {

            printf("\n\nQuestion-3.Hitler party which came into power in 1933 is known as-\n1.Labour Party\n2.Ku-Klux-Klan\n3.Nazi Party\n4.Democratic Party\nAns:");

            scanf("%d",&ans);

           if(ans==3)

            {

                printf("\n\nCorrect\n");

                c2++;

                marks2=marks2+1;

            }

           else if(ans==1||ans==2||ans==4)

           {

             printf("\n\nWrong\n");

             w2++;

             marks2=marks2-0.5;

            }

           else

           {

             printf("\n\nINVALID CHOICE\n");

             continue;

           }

          }

          else if(p2==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&p3);

          if(p3==1)

          {

             printf("\n\nQuestion-4.FFC stands for-\n1.None of the above\n2.Federation of Football Council\n3. Film Finance Corporation\n4.Foreign Finance Corporation\nAns: ");

             scanf("%d",&ans);

             if(ans==3)

             {

                printf("\n\nCorrect\n");

                c2++;

                marks2=marks2+1;

             }

          else if(ans==1||ans==2||ans==4 )

           {

              printf("\n\nWrong\n");

              w2++;

              marks2=marks2-0.5;

            }

            else

            {

                 printf("\n\nINVALID CHOICE\n");

             continue;

            }

          }

          else if(p3==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&p4);

          if(p4==1)

          {

             printf("\n\nQuestion-5.Each year World Red Cross and Red Crescent Day is celebrated on\n1.june 8\n2.june 18\n3.May 18\n4.May 8\nAns: ");

            scanf("%d",&ans);

            if(ans==4)

              {

                printf("\n\nCorrect\n");

                c2++;

                marks2=marks2+1;

               }

            else if(ans==1||ans==2||ans==3)

             {

                printf("\n\nWrong\n");

                w2++;

                marks2=marks2-0.5;

             }

           else

             {

                printf("\n\nINVALID CHOICE\n");

                continue;

            }

          }

          else if(p4==2)

          {

               printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&p5);

          if(p5==1)

          {

             printf("\n\nQuestion-6.First Afghan War took place in-\n1.1835\n2.1830\n3.1839\n4.1840\nAns:");

             scanf("%d",&ans);

             if(ans==3)

              {

                 printf("\n\nCorrect\n");

                  c2++;

                 marks2=marks2+1;

               }

             else if(ans==1||ans==2||ans==4)

              {

                  printf("\n\nWrong\n");

                  w2++;

                  marks2=marks2-0.5;

              }

              else

              {

                   printf("\n\nINVALID CHOICE\n");

                continue;

              }

              }

          else if(p5==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&p6);

          if(p6==1)

          {

             printf("\n\nQuestion-7.Golf player Vijay Singh belongs to which country? \n1.india\n2.UK\n3.bangladesh\n4.Fiji\nAns:");

             scanf("%d",&ans);

            if(ans==4)

               {

                  printf("\n\nCorrect\n");

                   c2++;

                  marks2=marks2+1;

               }

            else if(ans==1||ans==2||ans==3)

              {

                printf("\n\nWrong\n");

                w2++;

                marks2=marks2-0.5;

              }

              else

              {

                printf("\n\nINVALID CHOICE\n");

                continue;

              }

          }

          else if (p6==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

               printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&p7);

          if(p7==1)

          {

             printf("\n\nQuestion-8.First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in\n1.1967\n2.1970\n3.1980\n4.1990\nAns:");

             scanf("%d",&ans);

            if(ans==1)

             {

               printf("\n\nCorrect\n");

               c2++;

               marks2=marks2+1;

             }



           else if(ans==4||ans==2||ans==3)

             {

               printf("\n\nWrong\n");

               w2++;

              marks2=marks2-0.5;

             }

           else

           {

                printf("\n\nINVALID CHOICE\n");

                continue;

           }

          }

          else if(p7==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

             printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");

          scanf("%d",&p8);

          if(p8==1)

          {

              printf("\n\nQuestion-9.Epsom (England) is the place associated with- \n1.Polo\n2.Shooting\n3.Horse racing\n4.Snooker\nAns:");

              scanf("%d",&ans);

              if(ans==3)

              {

                printf("\n\nCorrect\n");

                c2++;

                marks2=marks2+1;

              }

              else if(ans==1||ans==2||ans==4)

              {

                 printf("\n\nWrong\n");

                 w2++;

                 marks2=marks2-0.5;

              }

              else

              {

                printf("\n\nINVALID CHOICE\n");

                continue;

              }

          }

          else if(p8==2)

          {

              printf("\n\nGAME OVER\n");

              exit(0);

          }

          else

          {

              printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

for(int i=1;i<3;)

        {

          printf("\n\npress 1 to next question\n press 2 to quit\nPress Here:");


          scanf("%d",&p9);

          if(p9==1)

          {

              printf("\n\nQuestion-10.Fastest shorthand writer was\n1.Khudada Khan\n2.J.R.D. Tata\n3.J.M. Tagore\n4.Dr. G. D. Bist\nAns:");

              scanf("%d",&ans);

              if(ans==4)

               {

                 printf("\n\nCorrect\n");

                 c2++;

                 marks2=marks2+1;



               }

             else if(ans==1||ans==2||ans==3)

               {

                 printf("\n\nWrong");

                 w2++;

                 marks2=marks2-0.5;

               }

               else

               {

                   printf("\n\ninvalid choice.please select the given option\n");

                   continue;

               }

          }

          else if(p9==2)

          {

              printf("\n\ngame over\n");

              exit(0);

          }

          else

          {

              printf("\n\ninvalid choice.please select the right option\n");

              continue;

          }

printf("\n* Wrong = %d \n * Correct = %d\n * Total marks = %.1f\n",w2,c2,marks2);

printf("\n");

if(c2==7||c2>7)

  {

    if(c2==8)

    {

      printf("\n\n    GOOD   \n");

    }

    if(c2==9)

    {

      printf("\n\n    VERY GOOD   \n");

    }

    if(c2==10)

    {

    printf("\n\n   OUTSANDING   \n");

    }
    total=marks+marks1+marks2;

    printf("\n\nCONGRATULATION!! YOU HAVE COMPLETE THE FINAL LEVEL \n");
    printf("\n\nNAME:%s\n1st round=%.2f\n2nd round=%.2f\n3rd round=%.2f\nTOTAL MARKS:%.2f\n",name,marks,marks1,marks2,total);
    printf("\n\nPRIZE MONEY\n");
    if(total==30)
    {
        printf("\n\nCONGRATULATION YOU GOT 200000$\n\n");

    }
    else if(total>=25||total<30)
    {
        printf("\n\nCONGRATULATION YOU GOT 100000$\n\n");
    }
    else
    {
        printf("\n\nTHANKS FOR PLAYING THIS GAME\n\n");
    }

    printf("1st Round                            2nd Round                                        3rd Round\n");
    printf("1.GHANA                              1.HYDROGEN SULPHIDE                              1.LARGEST RAILWAY STATION\n");
    printf("2.MULLAH UMAR                        2.1980                                           2.AFRICA\n");
    printf("3.CONGO                              3.FIELD                                          3.NAZI PARTY\n");
    printf("4.LIAQUAT ALI KHAN                   4.OPERATING SYSTEM                               4.FILM FINANCE CORPORATION\n");
    printf("5.10                                 5.1900                                           5.MAY 8\n");
    printf("6.ZIA UR RAHMAN                      6.ANIMATION/MOVIE FILE                           6.1839\n");
    printf("7.1989                               7.REMOTE CONTROL                                 7.FIJI\n");
    printf("8.MOGHENTHU                          8.FLASH                                          8.1967\n");
    printf("9.ASIA AND EUROPE                    9.TO INCREASE THE VOLTAGE MOMENTARILY            9.HORSE RACING\n");
    printf("10.UK                                10.VARIABLE VOLTAGE VARIABLE FREQUENCY           10.Dr.G. D. BIST\n");
    /*printf("");
    printf("");
    printf("");*/
    //printf("1st round=%d\n2nd round=%d\n3rd round\n",marks,marks1,marks2);

      exit(0);

  }

else

{

        printf("CONGRATULATION!! YOU HAVE COMPLETE THE FINAL LEVEL \n");
        total=marks+marks1+marks2;
printf("NAME:%s\n1st round=%.2f\n2nd round=%.2f\n3rd round=%.2f\nTOTAL MARKS:%.2f\n",name,marks,marks1,marks2,total);
printf("PRIZE MONEY\n");
    if(total==30)
    {
        printf("CONGRATULATION YOU GOT 200000$");

    }
    else if(total>=25||total<30)
    {
        printf("CONGRATULATION YOU GOT 100000$");
    }
    else
    {
        printf("THANKS FOR PLAYING THIS GAME");
    }

    printf("1st Round                            2nd Round                                        3rd Round\n");
    printf("1.GHANA                              1.HYDROGEN SULPHIDE                              1.LARGEST RAILWAY STATION\n");
    printf("2.MULLAH UMAR                        2.1980                                           2.AFRICA\n");
    printf("3.CONGO                              3.FIELD                                          3.NAZI PARTY\n");
    printf("4.LIAQUAT ALI KHAN                   4.OPERATING SYSTEM                               4.FILM FINANCE CORPORATION\n");
    printf("5.10                                 5.1900                                           5.MAY 8\n");
    printf("6.ZIA UR RAHMAN                      6.ANIMATION/MOVIE FILE                           6.1839\n");
    printf("7.1989                               7.REMOTE CONTROL                                 7.FIJI\n");
    printf("8.MOGHENTHU                          8.FLASH                                          8.1967\n");
    printf("9.ASIA AND EUROPE                    9.TO INCREASE THE VOLTAGE MOMENTARILY            9.HORSE RACING\n");
    printf("10.UK                                10.VARIABLE VOLTAGE VARIABLE FREQUENCY           10.Dr.G. D. BIST\n");
    exit(0);

}





break;}//10

break;}//09

break;}//08

break;}//07

break;}//06

break;}//05

break;}//04

break;}//03

break;}//02

break;}//01

}

else if(f1==2)

 {

     exit(0);

 }

 else

 {

     printf("\n\nINVALID CHOICE.Please select the right option");

     continue;

 }

        }





////////////////////////////////////

break;}//10

break;}//09

break;}//08

break;}//07

break;}//06

break;}//05

break;}//04

break;}//03

break;}//02

break;}//01

                }

else if(f==2)

 {

     exit(0);

 }

 else

 {

     printf("INVALID CHOICE.Please select the right option");

     continue;

 }

              }//second round end

break;}//10

break;}//09

break;}//08

break;}//07

break;}//06

break;}//05

break;}//04

break;}//03

break;}//02

break;}//01 first round end

} //game end















