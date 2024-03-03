#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FortAwardManager.generated.h"

class AFortPlayerController;
class UFortAwardDetector;

UCLASS(Blueprintable)
class UFortAwardManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAwardDetector*> ActiveAwards;
    
public:
    UFortAwardManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    void GetSourceAndContextTags(FGameplayTagContainer& OutSourceTags, FGameplayTagContainer& OutContextTags) const;
    
};

