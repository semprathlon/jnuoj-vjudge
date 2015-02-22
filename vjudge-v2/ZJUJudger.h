/* 
 * File:   ZJUJudger.h
 * Author: payper
 *
 * Created on 2014年3月25日, 下午2:09
 */

#ifndef ZJUJUDGER_H
#define	ZJUJUDGER_H

#include "vjudge.h"
#include "VirtualJudger.h"

class ZJUJudger : public VirtualJudger {
public:
    ZJUJudger(JudgerInfo *);
    virtual ~ZJUJudger();
    void initHandShake();
private:
    void login();
    int submit(Bott *);
    Bott * getStatus(Bott *);
    string getCEinfo(Bott *);
    string convertResult(string);
    string submission_id_for_ce;
};

#endif	/* ZJUJUDGER_H */

