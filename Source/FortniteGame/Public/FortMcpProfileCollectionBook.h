#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCollectionBook.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileCollectionBook : public UFortMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfileCollectionBook();
private:
 /*   UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void UpgradeSlottedItem(const FString& TargetItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void ConvertSlottedItem(const FString& TargetItemId, int32 ConversionIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null)
    void ClaimCollectionBookPageRewards(const FString& PageTemplateId, const FString& SectionId, int32 SelectedRewardIndex, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

