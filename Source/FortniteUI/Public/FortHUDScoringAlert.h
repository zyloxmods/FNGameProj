#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "EMatchAbandonState.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "FortHUDScoringAlert.generated.h"

class AFortPlayerStateAthena;
class UCommonLazyImage;
class UCommonTextBlock;
class UDataTable;
class UFortHUDPointCounter;
class UFortTournamentAbandonMatchDialog;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHUDScoringAlert : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ScoringDataDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PointGainFormat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHUDPointCounter* HUDPointCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ScoreDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PointCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Icon_Scoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTournamentAbandonMatchDialog> AbandonMatchClass;
    
public:
    UFortHUDScoringAlert();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeamPlacementChanged(int32 NewTeamPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPointScored();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPlacementChanged(AFortPlayerStateAthena* Sender, int32 NewPlayerPlacement);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchAbandonStateChanged(EMatchAbandonState OldState, EMatchAbandonState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    UFUNCTION(BlueprintCallable)
    void HandlePointAnimationFinished();
    
};

