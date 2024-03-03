#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "IconDisplayData.h"
#include "InfiltrationModeState.h"
#include "InfiltrationPOIInfo.h"
#include "InfiltrationRoundInfoMutatorInterface.h"
#include "InfiltrationTeamInfo.h"
#include "RoundCosmeticInfo.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Infiltration.generated.h"

class AFortAthenaMutator_RoundHelper;
class AFortAthenaMutator_ShowPlacard;
class AFortPlayerControllerAthena;
class AInfiltrationCarryObjectCapturePoint;
class AInfiltrationCarryObjectSpawnPoint;
class UCurveFloat;
class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Infiltration : public AFortAthenaMutator_GameModeBase, public IInfiltrationRoundInfoMutatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GroundTimer;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FInfiltrationTeamInfo InfiltrationTeamInfos[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CaptureTimeRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CaptureRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconDisplayData IntelIconData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconDisplayData IntelCapturePointIconData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush_UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush_DownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeToBlockRespawnBetweenRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumOfActiveCapturePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PerkUnlockedGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ModeState, meta=(AllowPrivateAccess=true))
    FInfiltrationModeState ModeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AInfiltrationCarryObjectSpawnPoint* CurrentSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AInfiltrationCarryObjectCapturePoint* CurrentCapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FInfiltrationPOIInfo> POIInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoundAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoundWinAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MostRoundsAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayedInfAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Attacker_Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Attacker_Lose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Defender_Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Defender_Lose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoundCosmeticInfo> RoundCosmeticInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bRoundIntroEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DilationCurve;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_RoundHelper> CachedRoundHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector IntelLocation;
    
public:
    AFortAthenaMutator_Infiltration();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerOnDownloaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerOnCaptured();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModeState(FInfiltrationModeState OldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefendingTeam(const AFortPlayerControllerAthena* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAttackingTeam(const AFortPlayerControllerAthena* PlayerController) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishRoundIntro(AFortAthenaMutator_ShowPlacard* ShowPlacardMutator);
    
    
    // Fix for true pure virtual functions not being implemented
};

