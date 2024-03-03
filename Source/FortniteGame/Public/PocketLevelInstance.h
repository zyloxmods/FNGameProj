#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PocketLevelInstance.generated.h"

class UFortLocalPlayer;
class UFortPocketLevel;
class ULevelStreamingDynamic;
class UWorld;

UCLASS(Blueprintable)
class FORTNITEGAME_API UPocketLevelInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPocketLevel* PocketLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* StreamingPocketLevel;
    
public:
    UPocketLevelInstance();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePocketLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void HandlePocketLevelLoaded();
    
};

