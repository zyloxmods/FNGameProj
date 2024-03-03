#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RepGraphActorClassSettings.h"
#include "RepGraphActorTemplateSettings.h"
#include "GlobalRepGraphActorClassSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UGlobalRepGraphActorClassSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRepGraphActorTemplateSettings> TemplateSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRepGraphActorClassSettings> ClassSettings;
    
    UGlobalRepGraphActorClassSettings();
};

