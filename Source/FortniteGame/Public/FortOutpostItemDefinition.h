#pragma once
#include "CoreMinimal.h"
#include "FortCloudSaveItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortOutpostItemDefinition.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortOutpostItemDefinition : public UFortCloudSaveItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> StaticGameplayEffectsByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LongDescription;
    
public:
    UFortOutpostItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLongDescription() const;
    
};

