#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CreativeEditablePropertyInterface.h"
#include "FortCreativeToyOptionInterface.h"
#include "OnDeviceButtonClickedDelegateDelegate.h"
#include "OnDeviceButtonLabelChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeDeviceButtonComponent.generated.h"

class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCreativeDeviceButtonComponent : public UActorComponent, public IFortCreativeToyOptionInterface, public ICreativeEditablePropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceButtonClickedDelegate OnDeviceButtonClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceButtonLabelChangedDelegate OnDeviceButtonLabelChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EditWidget;
    
public:
    UFortCreativeDeviceButtonComponent();
    UFUNCTION(BlueprintCallable)
    void SetButtonLabel(const FText& InButtonLabel);
    
    
    // Fix for true pure virtual functions not being implemented
};

