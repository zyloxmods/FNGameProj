#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaSpatialScreen.h"
#include "SpatialChallengePunchCard.generated.h"

class UAthenaChallengePunchCard;
class UDynamicEntryBox;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialChallengePunchCard : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAthenaChallengePunchCard> FocusedPunchCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextPunchCardInputAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_PunchCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* Scroll_Box;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UAthenaChallengePunchCard>> PunchCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastStickInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDelayTime;
    
public:
    USpatialChallengePunchCard();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDiscoveredCount(int32 KnownCount, int32 CompletedCount, int32 TotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowFirstTimeInfo();
    
};

