#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "StatGroupData.h"
#include "AthenaProfileStatWidgetBase.generated.h"

class UAthenaBaseStatView;
class UAthenaProfileStatBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaProfileStatWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaProfileStatBox* ProfileStatBox;
    
public:
    UAthenaProfileStatWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetStatView(UAthenaBaseStatView* InStatView, bool RespectParentStatView);
    
    UFUNCTION(BlueprintCallable)
    void SetAsStat(const FGameplayTag& InStat);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStatViewChanged(UAthenaBaseStatView* StatView);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FStatGroupData> CreateWeaponGroupData(int32 MaxToReturn, bool bIncludeOtherCategory, bool bPercentages);
    
};

