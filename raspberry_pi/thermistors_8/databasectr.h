#ifndef DATABASECTR_H
#define DATABASECTR_H

#include <mysql/mysql.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <iostream>

#define DATABASE_IP "192.168.0.109"
#define DATABASE_NAME  "CPTLab"
#define DATABASE_USERNAME  "remote"
#define DATABASE_PASSWORD  "Cptlab30ps!"
#define TABLE_NAME "ThermalBoard8ch"
  

class databasectr
{
 public:
  
  databasectr(int NT);
  ~databasectr();

  MYSQL *mysql1;
  int DBconfig();
  int ADCconfig();
  void mysql_disconnect(void);

  int setDat(float* therm,float TT, float HH,float TT2, float HH2);
  int setIm(int mod, int chn, float Im);
  int setT(float Tm);
  
  //int getChn();
  //int getMod();
 private:
  int nt;
  char *value_int;
  char *ch_enable;
};

#endif
