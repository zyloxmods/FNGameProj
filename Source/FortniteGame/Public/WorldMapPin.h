#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldMapPin.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AWorldMapPin : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TheaterId;
    
public:
    AWorldMapPin();
    UFUNCTION(BlueprintCallable)
    void SetTheaterId(const FString& NewID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTheaterIdSet();
    
};

