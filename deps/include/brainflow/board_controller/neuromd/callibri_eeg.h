#pragma once

#ifndef BRAINFLOW_NO_NEUROMD

#include "callibri.h"

class CallibriEEG : public Callibri
{

#if defined _WIN32 || defined __APPLE__

protected:
    int apply_initial_settings ();
#endif

public:
    CallibriEEG (struct BrainFlowInputParams params) : Callibri ((int)CALLIBRI_EEG_BOARD, params)
    {
    }
    ~CallibriEEG ()
    {
    }
};
#endif
