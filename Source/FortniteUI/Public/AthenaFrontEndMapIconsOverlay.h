#pragma once
#include "CoreMinimal.h"
#include "AthenaMapIconsOverlay.h"
#include "Templates/SubclassOf.h"
#include "AthenaFrontEndMapIconsOverlay.generated.h"

class UAthenaFrontEndMapPoiIcon;
class UFortGameStateComponent_EventLevel;

UCLASS(Blueprintable)
class UAthenaFrontEndMapIconsOverlay : public UAthenaMapIconsOverlay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaFrontEndMapPoiIcon> AthenaMapPoiIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventLevelInstance;
    
public:
    UAthenaFrontEndMapIconsOverlay();
};

