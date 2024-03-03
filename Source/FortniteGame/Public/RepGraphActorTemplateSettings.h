#pragma once
#include "CoreMinimal.h"
#include "RepGraphActorSettingsBase.h"
#include "RepGraphActorTemplateSettings.generated.h"

USTRUCT(BlueprintType)
struct FRepGraphActorTemplateSettings : public FRepGraphActorSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemplateName;
    
    FORTNITEGAME_API FRepGraphActorTemplateSettings();
};

