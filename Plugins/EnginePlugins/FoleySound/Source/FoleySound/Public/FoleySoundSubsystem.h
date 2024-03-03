#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "FoleySoundSubsystem.generated.h"

class AActor;
class UFoleySoundLibrary;

UCLASS(Blueprintable)
class FOLEYSOUND_API UFoleySoundSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UFoleySoundSubsystem();
    UFUNCTION(BlueprintCallable)
    void RemoveLibrary(const AActor* Actor, TSubclassOf<UFoleySoundLibrary> Library);
    
    UFUNCTION(BlueprintCallable)
    void AddLibrary(const AActor* Actor, TSubclassOf<UFoleySoundLibrary> Library);
    
};

