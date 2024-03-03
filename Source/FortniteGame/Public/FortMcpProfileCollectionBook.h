#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCollectionBook.generated.h"

UCLASS(Blueprintable)
class UFortMcpProfileCollectionBook : public UFortMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfileCollectionBook();
private:/*
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UpgradeSlottedItem(const FString& TargetItemId, int32 DesiredLevel, UPARAM(NotReplicated) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void PromoteItem(const FString& TargetItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ConvertSlottedItem(const FString& TargetItemId, int32 ConversionIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ClaimCollectionBookPageRewards(const FString& PageTemplateId, const FString& SectionId, int32 SelectedRewardIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

