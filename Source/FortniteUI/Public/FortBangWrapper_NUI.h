#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortBangType.h"
#include "ETutorialType.h"
#include "FortBangInterface.h"
#include "FortBangWrapper_NUI.generated.h"

class UNamedSlot;
class UObject;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBangWrapper_NUI : public UCommonUserWidget, public IFortBangInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBangType BangType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialNameID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* ContentSlot;
    
public:
    UFortBangWrapper_NUI();
    UFUNCTION(BlueprintCallable)
    void UnregisterTutorialNameID();
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialNameID(FName InTutorialNameID);
    
    UFUNCTION(BlueprintCallable)
    void SetBangType(EFortBangType NewBangType);
    
    UFUNCTION(BlueprintCallable)
    void SetBangStateBP(bool bEnabled, int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTutorialCalloutFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopCallout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCallout(FName TutorialObjectiveName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBangStateChanged(bool bEnabled, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    void AsyncPlaySound2D(const UObject* WorldContextObject, TSoftObjectPtr<USoundBase> SoundToLoad, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

