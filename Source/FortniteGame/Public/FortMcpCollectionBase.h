#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "McpItemAware.h"
#include "FortMcpCollectedItemProperties.h"
#include "FortMcpCollectionBase.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpCollectionBase : public UObject, public IMcpItemAware {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMcpCollectedItemProperties> Collected;
    
public:
    UFortMcpCollectionBase();
    
    // Fix for true pure virtual functions not being implemented
};

