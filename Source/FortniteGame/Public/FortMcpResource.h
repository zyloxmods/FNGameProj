#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortMcpResource.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortMcpResource : public UObject {
    GENERATED_BODY()
public:
    UFortMcpResource();
};

