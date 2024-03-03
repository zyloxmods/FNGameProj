#pragma once
#include "CoreMinimal.h"
#include "EIntelStateEnum.h"
#include "InfiltrationModeState.h"
#include "LTMWidgetBase.h"
#include "InfiltrationStatusWidget.generated.h"

class UInfiltrationIntelStatusWidget;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew)
class UInfiltrationStatusWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInfiltrationModeState PrevModeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInfiltrationIntelStatusWidget*> IntelStatusWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIntelStateEnum, USoundBase*> AttackerAudioCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIntelStateEnum, USoundBase*> DefenderAudioCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIntelStateEnum, USoundBase*> SpamSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpamThrottle;
    
public:
    UInfiltrationStatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerDefending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyADraw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetSoundFromIntelState(EIntelStateEnum InState, bool bIsDefender) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfRounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefendingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAttackingTeam() const;
    
};

