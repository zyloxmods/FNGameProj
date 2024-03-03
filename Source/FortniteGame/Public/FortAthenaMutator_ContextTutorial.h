#pragma once
#include "CoreMinimal.h"
#include "ContextTutorialShowHighlightDelegate.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ContextTutorial.generated.h"

class UFortContextualTutorialController;
class UFortContextualTutorialDefinition;
class USoundCue;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortAthenaMutator_ContextTutorial : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContextTutorialShowHighlight OnShowButtonHighlight;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTutorials;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bContextTutorialMinimumLevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MessageSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConcurrentActiveContextualTutorials;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTimeBetweenContextualTutorialTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortContextualTutorialDefinition*> ContextualTutorialDefinitions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCombatGraceTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayCastDistanceForNearbyEnemyCentimeter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldMarkerPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldMarkerSockerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWorldMarker;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortContextualTutorialController*> Controllers;
    
public:
    AFortAthenaMutator_ContextTutorial();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

