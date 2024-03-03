#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Components/SlateWrapperTypes.h"
#include "FortSetting.generated.h"

class UFortLocalPlayer;
class UFortSetting;
class UFortSettingRegistry;

UCLASS(Abstract, Blueprintable)
class UFortSetting : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSetting* SettingParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSettingRegistry* OwningRegistry;
    
public:
    UFortSetting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDynamicDetails() const;
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDisplayNameVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDevName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescriptionRichText() const;
    
};

