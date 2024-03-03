#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EColorPickerColorRepresentation.h"
#include "EColorPickerType.h"
#include "FortColorPickerConfiguration.generated.h"

UCLASS(Blueprintable)
class UFortColorPickerConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoColorOptionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorPickerType ColorPickerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeCustomColorFromSelectedSwatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorPickerColorRepresentation CustomColorRepresentation;
    
public:
    UFortColorPickerConfiguration();
};

