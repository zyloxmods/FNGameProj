#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VideoExtractionBootstrapper.generated.h"

UCLASS(Blueprintable, Within=FortGameInstance)
class UVideoExtractionBootstrapper : public UObject {
    GENERATED_BODY()
public:
    UVideoExtractionBootstrapper();
};

