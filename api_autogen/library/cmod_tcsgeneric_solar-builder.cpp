#include <string>
#include <vector>

#include "vartab.h"

#include "cmod_tcsgeneric_solar-builder.h"

float TcsgenericSolar_GenericCSPPowerBlock_system_capacity_eval(var_table* vt, invoke_t* cxt)
{
	// inputs
	float csp.gss.pwrb.nameplate = vt->lookup("csp.gss.pwrb.nameplate")->num;

	// outputs
	float system_capacity;

	system_capacity = csp.gss.pwrb.nameplate * 1000.000000;

	if (cxt){
		cxt->result().assign("system_capacity", system_capacity);
	}

	return system_capacity;

}



float TcsgenericSolar_GenericCSPSolarField_qsf_des_eval(var_table* vt, invoke_t* cxt)
{
	// inputs
	float w_des = vt->lookup("w_des")->num;
	float eta_des = vt->lookup("eta_des")->num;
	float solarm = vt->lookup("solarm")->num;

	// outputs
	float qsf_des;

	qsf_des = w_des / eta_des * solarm;

	if (cxt){
		cxt->result().assign("qsf_des", qsf_des);
	}

	return qsf_des;

}


