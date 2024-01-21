#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortHUDElementWidget.h"
#include "AthenaGenericHUDTimerWidgetBase.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaGenericHUDTimerWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeText;
    
public:
    UAthenaGenericHUDTimerWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

