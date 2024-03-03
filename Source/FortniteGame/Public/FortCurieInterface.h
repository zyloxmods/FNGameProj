#pragma once
#include "CoreMinimal.h"
#include "CurieInterface.h"
#include "EFortCurieNativeFXType.h"
#include "FortNativeCurieFXResponse.h"
#include "FortCurieInterface.generated.h"

UINTERFACE()
class FORTNITEGAME_API UFortCurieInterface : public UCurieInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortCurieInterface : public ICurieInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShouldPlayNativeCurieFX(EFortCurieNativeFXType FXType, FFortNativeCurieFXResponse& OutResponse) const;
    
};

