#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PendingRequestManager.h"
#include "FortAIAssetLoader.generated.h"

UCLASS(Blueprintable)
class UFortAIAssetLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingRequestManager> PendingRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AssetsLoaded;
    
public:
    UFortAIAssetLoader();
};

