#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortAthenaReward.generated.h"

class UFortCosmeticItemCard;
class UFortItem;
class UFortItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaReward : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* SecondaryItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* RepresentedItemDefinition;
    
public:
    UFortAthenaReward();
    UFUNCTION(BlueprintCallable)
    void SetViewOnHovered(bool bShouldViewOnHovered);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupQuantity(int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepresentedItemSet(const UFortItemDefinition* ItemDefinition, bool bClaimed, bool bLocked, bool bLevelAchieved, bool bOwned);
    
    
    // Fix for true pure virtual functions not being implemented
};

