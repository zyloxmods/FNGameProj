#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCosmeticCheats.generated.h"

UCLASS(Blueprintable)
class UFortCosmeticCheats : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCosmeticCheats();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePreviewEnlightenedWithXP(bool bLiteralLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetEnlightenedLevel(int32 Level, int32 Season);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveStaticHooks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AdjustEnlightenedLevel(int32 Delta, int32 Season);
    
    UFUNCTION(BlueprintCallable)
    static void AddStaticHooks();
    
};

