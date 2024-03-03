#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaChallengeImageGridEntry.generated.h"

class UCommonLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaChallengeImageGridEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GridLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Row;
    
public:
    UAthenaChallengeImageGridEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionFromOwnedToCompletedState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionFromLockedToOwnedState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupLockedToOwnState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeSet(bool bIsComplete, bool bIsLocked);
    
    
    // Fix for true pure virtual functions not being implemented
};

