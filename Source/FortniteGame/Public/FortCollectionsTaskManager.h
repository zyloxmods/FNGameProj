#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCollectionsTaskManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortCollectionsTaskManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTimeoutSeconds;
    
public:
    UFortCollectionsTaskManager();
};

