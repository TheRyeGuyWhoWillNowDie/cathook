#pragma once
#include "common.hpp"

namespace hacks::tf2::nospread
{
extern bool is_syncing;
bool SendNetMessage(INetMessage *);
void SendNetMessagePost();
bool DispatchUserMessage(bf_read *, int);
void CL_SendMove_hook();
} // namespace hacks::tf2::nospread
