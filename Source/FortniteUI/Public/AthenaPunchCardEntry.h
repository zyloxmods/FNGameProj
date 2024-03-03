#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaPunchCardEntry.generated.h"

class UCommonTextBlock;
class UFortAccoladeItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPunchCardEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableFinishPlacementDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardQuantity_Recap;
    
public:
    UAthenaPunchCardEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMedal(const UFortAccoladeItemDefinition* PunchedMedal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewMedalPlaced(const UFortAccoladeItemDefinition* PunchedMedal, bool bPlaySocketAnim);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedPlacingNewMedal();
    
};

