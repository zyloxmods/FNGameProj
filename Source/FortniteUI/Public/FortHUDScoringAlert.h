#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortHUDElementWidget.h"
#include "FortHUDScoringAlert.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;
class UDataTable;
class UFortHUDPointCounter;

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
    
public:
    UFortHUDScoringAlert();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeamPlacementChanged(int32 NewTeamPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPointScored();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    UFUNCTION(BlueprintCallable)
    void HandlePointAnimationFinished();
    
};

