#pragma once
#include "CoreMinimal.h"
#include "RepGraphActorSettingsBase.h"
#include "RepGraphActorClassSettings.generated.h"

USTRUCT(BlueprintType)
struct FRepGraphActorClassSettings : public FRepGraphActorSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapToTemplate;
    
    FORTNITEGAME_API FRepGraphActorClassSettings();
};

