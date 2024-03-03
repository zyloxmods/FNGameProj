#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorkerBoardBase.generated.h"

class UFortItem;
class UFortWorker;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AWorkerBoardBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> WorkerPortraitComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorker*> WorkerItems;
    
public:
    AWorkerBoardBase();
private:
    UFUNCTION(BlueprintCallable)
    void SetupWorkerPortraits(const TArray<UStaticMeshComponent*> InWorkerPortraitComponents, const TArray<UFortItem*> InWorkerItems);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviewImagesLoaded();
    
    UFUNCTION(BlueprintCallable)
    void HandleIconDefinitionsLoaded();
    
};

