#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayStatTag.h"
#include "BlueprintGameplayStatsLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintGameplayStatsLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);
    
};

