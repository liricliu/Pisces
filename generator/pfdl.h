/**
 * @file pfdl.h
 * @author Mechan Leo (i@liric.com)
 * @brief Pisces Form Description Language Parser
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once

#include <stdio.h>

extern "C"{

typedef struct PFDLTree_t{

} PFDLTree;

typedef struct PFDLNamespace_t
{
    /* data */
} PFDLNamespace;

typedef struct PFDLPara_t
{
    /* data */
} PFDLPara;

typedef struct PFDLOption_t
{
    /* data */
} PFDLOption;


#define PFDL_COMMAND_ADD_AFTER
#define PFDL_COMMAND_DEL
#define PFDL_COMMAND_ADD_OPTION_AFTER
#define PFDL_COMMAND_ADD_OPTION_BEFORE

typedef struct PFDLResult_t
{
    unsigned char command;
    const char* para;
    const char* val;
    const char* ref;
    PFDLResult* next;
} PFDLResult;


/**
 * @brief 读取pfdl文件，创建一个pfdl树
 * 
 * @param fpath pfdl文件路径
 * @return PFDLTree* 
 */
PFDLTree* pfdl_new(const char* fpath);
void pfdl_input(PFDLTree* pfdltree,const char* para,const char* val,PFDLResult* returnResult);
void pfdl_query(PFDLTree* pfdltree,const char* para,const char* val);
void pfdl_generate(PFDLTree* pfdltree,PFDLResult* returnResult);
void pfdl_delete(PFDLTree*);    
void pfdl_print(PFDLTree*);

}