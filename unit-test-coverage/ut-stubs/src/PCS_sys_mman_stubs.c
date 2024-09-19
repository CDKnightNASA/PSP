/************************************************************************
 * NASA Docket No. GSC-18,719-1, and identified as “core Flight System: Bootes”
 *
 * Copyright (c) 2020 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *
 * Auto-Generated stub implementations for functions defined in PCS_sys_mman header
 */

#include "PCS_sys_mman.h"
#include "utgenstub.h"

/*
 * ----------------------------------------------------
 * Generated stub function for PCS_mmap()
 * ----------------------------------------------------
 */
void *PCS_mmap(void *addr, size_t len, int prot, int flags, int fildes, PCS_off_t off)
{
    UT_GenStub_SetupReturnBuffer(PCS_mmap, void *);

    UT_GenStub_AddParam(PCS_mmap, void *, addr);
    UT_GenStub_AddParam(PCS_mmap, size_t, len);
    UT_GenStub_AddParam(PCS_mmap, int, prot);
    UT_GenStub_AddParam(PCS_mmap, int, flags);
    UT_GenStub_AddParam(PCS_mmap, int, fildes);
    UT_GenStub_AddParam(PCS_mmap, PCS_off_t, off);

    UT_GenStub_Execute(PCS_mmap, Basic, NULL);

    return UT_GenStub_GetReturnValue(PCS_mmap, void *);
}