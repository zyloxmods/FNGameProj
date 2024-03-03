#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VerseCoroutineLib.generated.h"

UCLASS(Blueprintable)
class SOLARISINTEROP_API UVerseCoroutineLib : public UObject {
    GENERATED_BODY()
public:
    UVerseCoroutineLib();
    UFUNCTION(BlueprintCallable)
    static int32 GetState(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void Deallocate(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static UObject* Allocate(UClass* Type, UObject* Caller, int32 CallerResumeState);
    
    UFUNCTION(BlueprintCallable)
    static void Abort(UObject* Context, bool bAbortCallers);
    
};

