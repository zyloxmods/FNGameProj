#pragma once
#include "CoreMinimal.h"
#include "CrossplayPreferenceChangedDelegate.h"
#include "FortLocalPlayerSubsystem.h"
#include "FortCrossplayPromptContext.generated.h"

class UFortPlaylistAthena;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortCrossplayPromptContext : public UFortLocalPlayerSubsystem {
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

