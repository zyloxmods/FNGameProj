#include "McpProfile.h"
/*
void UMcpProfile::UnlockProfileForWrite_Implementation(const FString& Code, FDedicatedServerUrlContext& Context) {
}

void UMcpProfile::QueryPublicProfile_Implementation(FBaseUrlContext& Context) {
}

void UMcpProfile::QueryProfile_Implementation(FBaseUrlContext& Context) {
}

void UMcpProfile::LockProfileForWrite_Implementation(const FString& Code, int32 Timeout, FDedicatedServerUrlContext& Context) {
}

void UMcpProfile::DeleteProfile_Implementation(FClientUrlContext& Context) {
}

void UMcpProfile::DeleteAllProfiles_Implementation(FClientUrlContext& Context) {
}*/

UMcpProfile::UMcpProfile() {
    this->AllowSubscriptionToNotificationsService = true;
    this->bProfileLockOperationPending = false;
    this->bProfileUnlockOperationPending = false;
    this->bEnableMocks = true;
    this->ProfileGroup = NULL;
    this->ProfileRevision = 0;
    this->FullProfileQueryQueued = 0;
    this->bProfileWriteLocked = false;
}

