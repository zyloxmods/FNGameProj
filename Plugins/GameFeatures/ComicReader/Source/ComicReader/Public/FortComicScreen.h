#pragma once
#include "CoreMinimal.h"
#include "AthenaSpatialScreen.h"
#include "Types/SlateEnums.h"
#include "FortComicScreen.generated.h"

class UFortComicReader;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortComicScreen : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortComicReader* ComicReader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LoadingSpinner;
    
public:
    UFortComicScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShowContinueOnLastPage(bool InShowContinue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateComicTitle(const FString& InComicTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreProcessedNavInput(EUINavigation NavInput);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePreprocessorNavInput(EUINavigation InNavDirection);
    
};

