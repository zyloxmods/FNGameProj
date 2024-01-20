#pragma once
#include "CoreMinimal.h"
#include "CommonPoolableWidgetInterface.h"
#include "CommonUserWidget.h"
#include "FortUISurvivorSquadStatMatch.h"
#include "FortSurvivorSquadStatMatchBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget, public ICommonPoolableWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUISurvivorSquadStatMatch StatMatch;
    
public:
    UFortSurvivorSquadStatMatchBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatMatchUpdated(FFortUISurvivorSquadStatMatch UpdatedMatch);
    
    
    // Fix for true pure virtual functions not being implemented
};

