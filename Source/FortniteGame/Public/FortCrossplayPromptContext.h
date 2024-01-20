#pragma once
#include "CoreMinimal.h"
#include "CrossplayPreferenceChangedDelegate.h"
#include "FortBlueprintContext.h"
#include "FortCrossplayPromptContext.generated.h"

class UFortPlaylistAthena;

UCLASS(Blueprintable, NonTransient, Config=Game)
class FORTNITEGAME_API UFortCrossplayPromptContext : public UFortBlueprintContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrossplayPreferenceChanged CrossplayPreferenceChanged;
    
public:
    UFortCrossplayPromptContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaylistLimitedPoolMatchmakingEnabled(const UFortPlaylistAthena* PlaylistData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrossplayEnabled() const;
    
};

