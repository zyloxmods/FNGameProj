#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataIntegrityPair.h"
#include "AISpawnerTest_DataIntegrity.generated.h"

UCLASS(Blueprintable)
class AAISpawnerTest_DataIntegrity : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataIntegrityPair> TestDataList;
    
    AAISpawnerTest_DataIntegrity();
    UFUNCTION(BlueprintCallable)
    void SpawnAndDiff(const AActor* SpawnActorLocation);
    
};

